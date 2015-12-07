/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2014 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  See LICENSE file for license information.
 */
#ifndef _PASSENGER_SERVER_KIT_HTTP_REQUEST_REF_H_
#define _PASSENGER_SERVER_KIT_HTTP_REQUEST_REF_H_

#include <boost/move/core.hpp>

namespace Passenger {
namespace ServerKit {


template<typename Server, typename Request>
class HttpRequestRef {
private:
	BOOST_COPYABLE_AND_MOVABLE(HttpRequestRef);
	Request *request;
	const char *file;
	unsigned int line;

	static Server *getServer(Request *request) {
		return static_cast<Server *>(
			static_cast<typename Server::BaseClass *>(request->client->getServerBaseClassPointer())
		);
	}

public:
	explicit
	HttpRequestRef(Request *_request, const char *_file, unsigned int _line)
		: request(_request),
		  file(_file),
		  line(_line)
	{
		if (_request != NULL) {
			getServer(_request)->_refRequest(_request, _file, _line);
		}
	}

	HttpRequestRef(const HttpRequestRef &ref)
		: request(ref.request),
		  file(ref.file),
		  line(ref.line)
	{
		if (ref.request != NULL) {
			getServer(ref.request)->_refRequest(ref.request, ref.file, ref.line);
		}
	}

	HttpRequestRef(const HttpRequestRef &ref, const char *_file, unsigned int _line)
		: request(ref.request),
		  file(_file),
		  line(_line)
	{
		if (ref.request != NULL) {
			getServer(ref.request)->_refRequest(ref.request, _file, _line);
		}
	}

	explicit
	HttpRequestRef(BOOST_RV_REF(HttpRequestRef) ref)
		: request(ref.request)
	{
		ref.request = NULL;
	}

	~HttpRequestRef() {
		if (request != NULL) {
			getServer(request)->_unrefRequest(request, file, line);
		}
	}

	Request *get() const {
		return request;
	}

	HttpRequestRef &operator=(BOOST_COPY_ASSIGN_REF(HttpRequestRef) ref) {
		if (request == ref.request) {
			Request *oldRequest = request;
			const char *oldFile = file;
			unsigned int oldLine = line;
			request = ref.request;
			file = ref.file;
			line = ref.line;
			if (request != NULL) {
				getServer(request)->_refRequest(ref.request, ref.file, ref.line);
			}
			if (oldRequest != NULL) {
				getServer(oldRequest)->_unrefRequest(oldRequest, oldFile, oldLine);
			}
		}
		return *this;
	}

	HttpRequestRef &operator=(BOOST_RV_REF(HttpRequestRef) ref) {
		Request *oldRequest = request;
		request = ref.request;
		ref.request = NULL;
		if (oldRequest != NULL) {
			getServer(oldRequest)->_unrefRequest(oldRequest, file, line);
		}
		return *this;
	}
};


} // namespace ServerKit
} // namespace Passenger

#endif /* _PASSENGER_SERVER_KIT_HTTP_REQUEST_REF_H_ */
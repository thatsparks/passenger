/*
 *  Phusion Passenger - https://www.phusionpassenger.com/
 *  Copyright (c) 2010-2015 Phusion Holding B.V.
 *
 *  "Passenger", "Phusion Passenger" and "Union Station" are registered
 *  trademarks of Phusion Holding B.V.
 *
 *  See LICENSE file for license information.
 */
#ifndef _PASSENGER_CONSTANTS_H_
#define _PASSENGER_CONSTANTS_H_

/* Constants.h is automatically generated from Constants.h.erb by the build system.
 * Most constants are derived from src/ruby_supportlib/phusion_passenger/constants.rb.
 *
 * To force regenerating this file:
 *   rm -f src/cxx_supportlib/Constants.h
 *   rake src/cxx_supportlib/Constants.h
 */


	#define AGENT_EXE "PassengerAgent"

	#define DEB_APACHE_MODULE_PACKAGE "libapache2-mod-passenger-enterprise"

	#define DEB_DEV_PACKAGE "passenger-enterprise-dev"

	#define DEB_MAIN_PACKAGE "passenger-enterprise"

	#define DEB_NGINX_PACKAGE "nginx-extras"

	#define DEFAULT_ANALYTICS_LOG_GROUP ""

	#define DEFAULT_ANALYTICS_LOG_PERMISSIONS "u=rwx,g=rx,o=rx"

	#define DEFAULT_ANALYTICS_LOG_USER "nobody"

	#define DEFAULT_APP_ENV "production"

	#define DEFAULT_APP_THREAD_COUNT 1

	#define DEFAULT_CONCURRENCY_MODEL "process"

	#define DEFAULT_FILE_BUFFERED_CHANNEL_THRESHOLD 131072

	#define DEFAULT_HTTP_SERVER_LISTEN_ADDRESS "tcp://127.0.0.1:3000"

	#define DEFAULT_INTEGRATION_MODE "standalone"

	#define DEFAULT_LOG_LEVEL 3

	#define DEFAULT_MAX_POOL_SIZE 6

	#define DEFAULT_MAX_PRELOADER_IDLE_TIME 300

	#define DEFAULT_MAX_REQUEST_QUEUE_SIZE 100

	#define DEFAULT_MBUF_CHUNK_SIZE 512

	#define DEFAULT_NODEJS "node"

	#define DEFAULT_POOL_IDLE_TIME 300

	#define DEFAULT_PYTHON "python"

	#define DEFAULT_RESPONSE_BUFFER_HIGH_WATERMARK 134217728

	#define DEFAULT_RUBY "ruby"

	#define DEFAULT_SPAWN_METHOD "smart"

	#define DEFAULT_START_TIMEOUT 90000

	#define DEFAULT_STAT_THROTTLE_RATE 10

	#define DEFAULT_STICKY_SESSIONS_COOKIE_NAME "_passenger_route"

	#define DEFAULT_UNION_STATION_GATEWAY_ADDRESS "gateway.unionstationapp.com"

	#define DEFAULT_UNION_STATION_GATEWAY_PORT 443

	#define DEFAULT_UST_ROUTER_LISTEN_ADDRESS "tcp://127.0.0.1:9344"

	#define DEFAULT_WEB_APP_USER "nobody"

	#define ENTERPRISE_URL "https://www.phusionpassenger.com/enterprise"

	#define FEEDBACK_FD 3

	#define FLYING_PASSENGER_NAME "Flying Passenger"

	#define GLOBAL_NAMESPACE_DIRNAME "passenger-enterprise"

	#define MESSAGE_SERVER_MAX_PASSWORD_SIZE 100

	#define MESSAGE_SERVER_MAX_USERNAME_SIZE 100

	#define PASSENGER_API_VERSION "0.3"

	#define PASSENGER_API_VERSION_MAJOR 0

	#define PASSENGER_API_VERSION_MINOR 3

	#define PASSENGER_DEFAULT_USER "nobody"

	#define PASSENGER_IS_ENTERPRISE 1

	#define PASSENGER_VERSION "5.0.22"

	#define POOL_HELPER_THREAD_STACK_SIZE 262144

	#define PROCESS_SHUTDOWN_TIMEOUT 60

	#define PROCESS_SHUTDOWN_TIMEOUT_DISPLAY "1 minute"

	#define PROGRAM_NAME "Phusion Passenger"

	#define RPM_APACHE_MODULE_PACKAGE "mod_passenger_enterprise"

	#define RPM_DEV_PACKAGE "passenger-enterprise-devel"

	#define RPM_MAIN_PACKAGE "passenger-enterprise"

	#define RPM_NGINX_PACKAGE "nginx"

	#define SERVER_INSTANCE_DIR_STRUCTURE_MAJOR_VERSION 3

	#define SERVER_INSTANCE_DIR_STRUCTURE_MINOR_VERSION 0

	#define SERVER_INSTANCE_DIR_STRUCTURE_MIN_SUPPORTED_MINOR_VERSION 0

	#define SERVER_KIT_MAX_SERVER_ENDPOINTS 4

	#define SERVER_TOKEN_NAME "Phusion_Passenger"

	#define SHORT_PROGRAM_NAME "Passenger"

	#define SUPPORT_URL "https://www.phusionpassenger.com/documentation_and_support"

	#define USER_NAMESPACE_DIRNAME ".passenger-enterprise"


#endif /* _PASSENGER_CONSTANTS_H */
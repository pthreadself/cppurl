#include "cppurl.h"

using namespace cppurl;

Request::Request() {
    curl_.reset(curl_easy_init());




}

Request::~Request() {


}

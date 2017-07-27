#include "cppurl.h"

using namespace cppurl;

Request::Request() {
    curl_.reset(curl_easy_init());




}

Request::~Request() {


}

void Request::SetURL(const std::string & url) {
    CURLcode code = curl_easy_setopt(curl_.get(), CURLOPT_URL, url.c_str());
    if (CURLE_OK != code) {
        throw Exception(code);
    }
}

void Request::SetURL(const char * url) {
    CURLcode code = curl_easy_setopt(curl_.get(), CURLOPT_URL, url);
    if (CURLE_OK != code) {
        throw Exception(code);
    }
}


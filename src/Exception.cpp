//
// Created by pthreadself on 2017/7/27.
//

#include "cppurl.h"

using namespace cppurl;


Exception::Exception(CURLcode err_code) :
        std::exception(),
        err_msg_(curl_easy_strerror(err_code)) {
}

const char * Exception::what() const noexcept {
    return err_msg_.c_str();
}


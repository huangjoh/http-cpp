//
// The MIT License (MIT)
//
// Copyright (c) 2013 by Konstantin (Kosta) Baumann & Autodesk Inc.
//
// Permission is hereby granted, free of charge,  to any person obtaining a copy of
// this software and  associated documentation  files  (the "Software"), to deal in
// the  Software  without  restriction,  including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software,  and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this  permission notice  shall be included in all
// copies or substantial portions of the Software.
//
// THE  SOFTWARE  IS  PROVIDED  "AS IS",  WITHOUT  WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE  AND NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE  LIABLE FOR ANY CLAIM,  DAMAGES OR OTHER LIABILITY, WHETHER
// IN  AN  ACTION  OF  CONTRACT,  TORT  OR  OTHERWISE,  ARISING  FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#include "operation.hpp"

bool http::operation_is_known(http::operation op) {
    switch(op) {
#define HTTP_OPERATION_CASE(X) case X: return true
        HTTP_OPERATION_CASE(HTTP_GET);
        HTTP_OPERATION_CASE(HTTP_HEAD);
        HTTP_OPERATION_CASE(HTTP_POST);
        HTTP_OPERATION_CASE(HTTP_PUT);
        HTTP_OPERATION_CASE(HTTP_DELETE);
#undef  HTTP_OPERATION_CASE
        default: return false;
    }
}

const char* http::operation_to_string(http::operation op) {
    switch(op) {
#define HTTP_OPERATION_CASE(X) case X: return #X
        HTTP_OPERATION_CASE(HTTP_GET);
        HTTP_OPERATION_CASE(HTTP_HEAD);
        HTTP_OPERATION_CASE(HTTP_POST);
        HTTP_OPERATION_CASE(HTTP_PUT);
        HTTP_OPERATION_CASE(HTTP_DELETE);
#undef  HTTP_OPERATION_CASE
        default: return "HTTP_UNKNOWN";
    }
}

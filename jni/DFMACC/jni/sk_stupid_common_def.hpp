/*
 * Copyright (C) 2015 zheng qian <xqq@0ginr.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SK_STUPID_COMMON_DEF_HPP
#define _SK_STUPID_COMMON_DEF_HPP

#include "sk_refcnt.hpp"

class SkSurface_t: public SkRefCnt_t {
    // nothing needed here
};

class SkCanvas_t : public SkRefCnt_t {
    // nothing needed here
};

class GrContext_t : public SkRefCnt_t {
    // nothing needed here
};

struct GrGLInterface_t : public SkRefCnt_t {
    // nothing needed here
};

class GrRenderTarget_t : public SkRefCnt_t {
    // nothing needed here
};

class SkGpuDevice_t : public SkRefCnt_t {
    // nothing needed here
};

#endif // _SK_STUPID_COMMON_DEF_HPP

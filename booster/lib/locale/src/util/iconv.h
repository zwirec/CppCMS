//
//  Copyright (c) 2009-2011 Artyom Beilis (Tonkikh)
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOSTER_LOCALE_ICONV_FIXER_HPP
#define BOOSTER_LOCALE_ICONV_FIXER_HPP

#include <iconv.h>

namespace booster {
    namespace locale {
#if defined(__ICONV_F_HIDE_INVALID) && defined(__FreeBSD__)
        inline size_t call_iconv(iconv_t d,char **in,size_t *insize,char **out,size_t *outsize)
        {
            char const **rin = const_cast<char const **>(in);
            return __iconv(d,rin,insize,out,outsize,__ICONV_F_HIDE_INVALID,0);
        }
#else
        extern "C" {
            typedef size_t (*gnu_iconv_ptr_type)(iconv_t d,char const **in,size_t *insize,char **out,size_t *outsize);
            typedef size_t (*posix_iconv_ptr_type)(iconv_t d,char **in,size_t *insize,char **out,size_t *outsize);
        }
        inline size_t do_iconv(gnu_iconv_ptr_type ptr,iconv_t d,char **in,size_t *insize,char **out,size_t *outsize)
        {
            char const **rin = const_cast<char const **>(in);
            return ptr(d,rin,insize,out,outsize);
        }
        inline size_t do_iconv(posix_iconv_ptr_type ptr,iconv_t d,char **in,size_t *insize,char **out,size_t *outsize)
        {
            return ptr(d,in,insize,out,outsize);
        }
        inline size_t call_iconv(iconv_t d,char **in,size_t *insize,char **out,size_t *outsize)
        {
            return do_iconv( iconv, d, in,insize,out,outsize);
        }
#endif

    } // locale 
} // boost

#endif
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4

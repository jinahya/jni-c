/*
 * Copyright 2015 Jin Kwon &lt;onacit at gmail.com&gt;.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */


package com.github.jinahya.jnic;


import java.math.BigInteger;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniLimits {


    static native int CHAR_BIT();


    public static final int CHAR_BIT = CHAR_BIT();


    static native int MB_LEN_MAX();


    public static final int MB_LEN_MAX = MB_LEN_MAX();


    static native int CHAR_MIN();


    public static final int CHAR_MIN = CHAR_MIN();


    static native int CHAR_MAX();


    public static final int CHAR_MAX = CHAR_MAX();


    static native int SCHAR_MIN();


    public static final int SCHAR_MIN = SCHAR_MIN();


    static native int SCHAR_MAX();


    public static final int SCHAR_MAX = SCHAR_MAX();


    static native int UCHAR_MAX();


    public static final int UCHAR_MAX = UCHAR_MAX();


    static native int SHRT_MIN();


    public static final int SHRT_MIN = SHRT_MIN();


    static native int SHRT_MAX();


    public static final int SHRT_MAX = SHRT_MAX();


    static native int USHRT_MAX();


    public static final int USHRT_MAX = USHRT_MAX();


    static native int INT_MIN();


    public static final int INT_MIN = INT_MIN();


    static native int INT_MAX();


    public static final int INT_MAX = INT_MAX();


    static native long UINT_MAX();


    public static final long UINT_MAX = UINT_MAX();


    static native long LONG_MIN();


    public static final long LONG_MIN = LONG_MIN();


    static native long LONG_MAX();


    public static final long LONG_MAX = LONG_MAX();


    static native boolean ULONG_MAX(byte[] bytes);


    static BigInteger ULONG_MAX() {
        final byte[] bytes = new byte[9];
        return ULONG_MAX(bytes) ? new BigInteger(bytes) : null;
    }


    public static final BigInteger ULONG_MAX = ULONG_MAX();


    // --------------------------------------------------------------- LLONG_MIN
    static native boolean LLONG_MIN(byte[] bytes);


    static BigInteger LLONG_MIN() {
        final byte[] bytes = new byte[8 * 2 + 1];
        return LLONG_MIN(bytes) ? new BigInteger(bytes) : null;
    }


    public static final BigInteger LLONG_MIN = LLONG_MIN();


    // --------------------------------------------------------------- LLONG_MAX
    static native boolean LLONG_MAX(byte[] bytes);


    static BigInteger LLONG_MAX() {
        final byte[] bytes = new byte[8 * 2 + 1];
        return LLONG_MAX(bytes) ? new BigInteger(bytes) : null;
    }


    public static final BigInteger LLONG_MAX = LLONG_MAX();


    // -------------------------------------------------------------- ULLONG_MAX
    static native boolean ULLONG_MAX(byte[] bytes);


    static BigInteger ULLONG_MAX() {
        final byte[] bytes = new byte[8 * 2 + 1];
        return ULLONG_MAX(bytes) ? new BigInteger(bytes) : null;
    }


    public static final BigInteger ULLONG_MAX = ULLONG_MAX();


}


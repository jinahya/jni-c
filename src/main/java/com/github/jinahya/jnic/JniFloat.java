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


import java.math.BigDecimal;
import java.math.BigInteger;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniFloat {


    // --------------------------------------------------------------- FLT_RADIX
    static native int FLT_RADIX();


    public static final int FLT_RADIX = FLT_RADIX();


//    // ------------------------------------------------------------- DECIMAL_DIG
//    static native int DECIMAL_DIG();
//
//
//    public static final int DECIMAL_DIG = DECIMAL_DIG();
    // ----------------------------------------------------------------- FLT_MIN
    static native float FLT_MIN();


    public static final float FLT_MIN = FLT_MIN();


    // ----------------------------------------------------------------- DBL_MIN
    static native double DBL_MIN();


    public static final double DBL_MIN = DBL_MIN();


    // ---------------------------------------------------------------- LDBL_MIN
    static native String LDBL_MIN_STRING();


    //static native byte[] LDBL_MIN_BYTES();
    // @todo fix
    static BigDecimal LDBL_MIN() {

        final String LDBL_MIN_STR = LDBL_MIN_STRING();

        return (LDBL_MIN_STR == null) ? null : new BigDecimal(LDBL_MIN_STR);
    }


    public static final BigDecimal LDBL_MIN = LDBL_MIN();


    // ----------------------------------------------------------------- FLT_MAX
    static native float FLT_MAX();


    public static final float FLT_MAX = FLT_MAX();


    // ----------------------------------------------------------------- DBL_MAX
    static native double DBL_MAX();


    public static final double DBL_MAX = DBL_MAX();


    // ---------------------------------------------------------------- LDBL_MAX
    static native String LDBL_MAX_STRING();


    //static native byte[] LDBL_MAX_BYTES();
    // @todo fix
    static BigDecimal LDBL_MAX() {

        final String LDBL_MAX_STR = LDBL_MAX_STRING();

        return LDBL_MAX_STR == null ? null : new BigDecimal(LDBL_MAX_STR);
    }


    public static final BigDecimal LDBL_MAX = null;//LDBL_MAX();


}


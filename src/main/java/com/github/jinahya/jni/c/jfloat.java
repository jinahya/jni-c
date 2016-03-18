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
package com.github.jinahya.jni.c;

import java.math.BigDecimal;

/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class jfloat {

    // --------------------------------------------------------------- FLT_RADIX
    static native int FLT_RADIX();

    public static final int FLT_RADIX = FLT_RADIX();

    // ------------------------------------------------------------- DECIMAL_DIG
    static native int DECIMAL_DIG();

    public static final int DECIMAL_DIG = DECIMAL_DIG();

    // ----------------------------------------------------------------- FLT_MIN
    static native float FLT_MIN();

    public static final float FLT_MIN = FLT_MIN();

    // ----------------------------------------------------------------- DBL_MIN
    static native double DBL_MIN();

    public static final double DBL_MIN = DBL_MIN();

    // ---------------------------------------------------------------- LDBL_MIN
    static native String LDBL_MIN_STRING();

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

    static BigDecimal LDBL_MAX() {

        final String string = LDBL_MAX_STRING();

        return string == null ? null : new BigDecimal(string);
    }

    public static final BigDecimal LDBL_MAX = LDBL_MAX();

    // ------------------------------------------------------------- FLT_EPSILON
    static native float FLT_EPSILON();

    public static final float FLT_EPSILON = FLT_EPSILON();

    // ------------------------------------------------------------- DBL_EPSILON
    static native double DBL_EPSILON();

    public static final double DBL_EPSILON = DBL_EPSILON();

    // ------------------------------------------------------------ LDBL_EPSILON
    static native String LDBL_EPSILON_STRING();

    static BigDecimal LDBL_EPSILON() {

        final String string = LDBL_EPSILON_STRING();

        return string == null ? null : new BigDecimal(string);
    }

    public static final BigDecimal LDBL_EPSILON = LDBL_EPSILON();

    // ----------------------------------------------------------------- FLT_DIG
    static native int FLT_DIG();

    public static final int FLT_DIG = FLT_DIG();

    // ----------------------------------------------------------------- DBL_DIG
    static native int DBL_DIG();

    public static final int DBL_DIG = DBL_DIG();

    // ---------------------------------------------------------------- LDBL_DIG
    static native int LDBL_DIG();

    public static final int LDBL_DIG = LDBL_DIG();

    // ------------------------------------------------------------ FLT_MANT_DIG
    static native int FLT_MANT_DIG();

    public static final int FLT_MANT_DIG = FLT_MANT_DIG();

    // ------------------------------------------------------------ DBL_MANT_DIG
    static native int DBL_MANT_DIG();

    public static final int DBL_MANT_DIG = DBL_MANT_DIG();

    // ----------------------------------------------------------- LDBL_MANT_DIG
    static native int LDBL_MANT_DIG();

    public static final int LDBL_MANT_DIG = LDBL_MANT_DIG();

    // ------------------------------------------------------------- FLT_MIN_EXP
    static native int FLT_MIN_EXP();

    public static final int FLT_MIN_EXP = FLT_MIN_EXP();

    // ------------------------------------------------------------- DBL_MIN_EXP
    static native int DBL_MIN_EXP();

    public static final int DBL_MIN_EXP = DBL_MIN_EXP();

    // ------------------------------------------------------------ LDBL_MIN_EXP
    static native int LDBL_MIN_EXP();

    public static final int LDBL_MIN_EXP = LDBL_MIN_EXP();

    // ---------------------------------------------------------- FLT_MIN_10_EXP
    static native int FLT_MIN_10_EXP();

    public static final int FLT_MIN_10_EXP = FLT_MIN_10_EXP();

    // ---------------------------------------------------------- DBL_MIN_10_EXP
    static native int DBL_MIN_10_EXP();

    public static final int DBL_MIN_10_EXP = DBL_MIN_10_EXP();

    // --------------------------------------------------------- LDBL_MIN_10_EXP
    static native int LDBL_MIN_10_EXP();

    public static final int LDBL_MIN_10_EXP = LDBL_MIN_10_EXP();

    // ------------------------------------------------------------- FLT_MAX_EXP
    static native int FLT_MAX_EXP();

    public static final int FLT_MAX_EXP = FLT_MAX_EXP();

    // ------------------------------------------------------------- DBL_MAX_EXP
    static native int DBL_MAX_EXP();

    public static final int DBL_MAX_EXP = DBL_MAX_EXP();

    // ------------------------------------------------------------ LDBL_MAX_EXP
    static native int LDBL_MAX_EXP();

    public static final int LDBL_MAX_EXP = LDBL_MAX_EXP();

    // ---------------------------------------------------------- FLT_MAX_10_EXP
    static native int FLT_MAX_10_EXP();

    public static final int FLT_MAX_10_EXP = FLT_MAX_10_EXP();

    // ---------------------------------------------------------- DBL_MAX_10_EXP
    static native int DBL_MAX_10_EXP();

    public static final int DBL_MAX_10_EXP = DBL_MAX_10_EXP();

    // --------------------------------------------------------- LDBL_MAX_10_EXP
    static native int LDBL_MAX_10_EXP();

    public static final int LDBL_MAX_10_EXP = LDBL_MAX_10_EXP();

    // -------------------------------------------------------------- FLT_ROUNDS
    static native int FLT_ROUNDS();

    public static final int FLT_ROUNDS = FLT_ROUNDS();

    // --------------------------------------------------- FLT_EVAL_METHOD (C99)
    static native int FLT_EVAL_METHOD();

    public static final int FLT_EVAL_METHOD = FLT_EVAL_METHOD();

    // --------------------------------------------------- FLT_HAS_SUBNORM (C11)
    static native int FLT_HAS_SUBNORM();

    public static final int FLT_HAS_SUBNORM = FLT_HAS_SUBNORM();

    // --------------------------------------------------- DBL_HAS_SUBNORM (C11)
    static native int DBL_HAS_SUBNORM();

    public static final int DBL_HAS_SUBNORM = DBL_HAS_SUBNORM();

    // -------------------------------------------------- LDBL_HAS_SUBNORM (C11)
    static native int LDBL_HAS_SUBNORM();

    public static final int LDBL_HAS_SUBNORM = LDBL_HAS_SUBNORM();

}

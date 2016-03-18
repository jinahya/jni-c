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

import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import org.testng.annotations.Test;
import static org.slf4j.LoggerFactory.getLogger;
import static org.testng.Assert.assertTrue;

/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class jfloatTest extends JniCTest {

    private static final Logger logger = getLogger(lookup().lookupClass());

    // --------------------------------------------------------------- FLT_RADIX
    @Test(enabled = true)
    public static void FLT_RADIX() {
        assertTrue(jfloat.FLT_RADIX > 0);
    }

    // ------------------------------------------------------------- DECIMAL_DIG
    @Test(enabled = true)
    public static void DECIMAL_DIG() {
        logger.debug("DECIAML_DIG: {}", jfloat.DECIMAL_DIG);
    }

    // ----------------------------------------------------------------- FLT_MIN
    @Test(enabled = true)
    public static void FLT_MIN() {
        logger.debug("FLT_MIN: {} ({})", jfloat.FLT_MIN, Float.MIN_NORMAL);
        assertTrue(jfloat.FLT_MIN > .0f);
    }

    // ----------------------------------------------------------------- DBL_MIN
    @Test(enabled = true)
    public static void DBL_MIN() {
        logger.debug("DBL_MIN: {} ({})", jfloat.DBL_MIN, Double.MIN_NORMAL);
        assertTrue(jfloat.DBL_MIN > .0d);
    }

    // ---------------------------------------------------------------- LDBL_MIN
    @Test(enabled = true)
    public static void LDBL_MIN() {
        logger.debug("LDBL_MIN: {}", jfloat.LDBL_MIN);
        //assertTrue(JniFloat.LDBL_MIN == null
        //           || JniFloat.LDBL_MIN.signum() == -1);
    }

    // ----------------------------------------------------------------- FLT_MAX
    @Test(enabled = true)
    public static void FLT_MAX() {
        //logger.debug("FLT_MAX: {} ()", JniFloat.FLT_MAX, Float.MAX_VALUE);
        assertTrue(jfloat.FLT_MAX > .0f);
    }

    // ----------------------------------------------------------------- DBL_MAX
    @Test(enabled = true)
    public static void DBL_MAX() {
        //logger.debug("DBL_MAX: {} ({})", JniFloat.DBL_MAX, Double.MAX_VALUE);
        assertTrue(jfloat.DBL_MAX > .0d);
    }

    // ---------------------------------------------------------------- LDBL_MAX
    @Test(enabled = true)
    public static void LDBL_MAX() {
        //logger.debug("LDBL_MAX: {}", JniFloat.LDBL_MAX);
        assertTrue(jfloat.LDBL_MAX == null
                   || jfloat.LDBL_MAX.signum() == 1);
    }

    // ------------------------------------------------------------- FLT_EPSILON
    @Test(enabled = true)
    public static void FLT_EPSILON() {
        logger.debug("FLT_EPSILON: {} ({})", jfloat.FLT_EPSILON,
                     Math.ulp(1.0f));
        assertTrue(jfloat.FLT_EPSILON > .0f);
    }

    // ------------------------------------------------------------- DBL_EPSILON
    @Test(enabled = true)
    public static void DBL_EPSILON() {
        logger.debug("DBL_EPSILON: {} ({})", jfloat.DBL_EPSILON,
                     Math.ulp(1.0d));
        assertTrue(jfloat.DBL_EPSILON > .0d);
    }

    // ------------------------------------------------------------ LDBL_EPSILON
    @Test(enabled = true)
    public static void LDBL_EPSILON() {
        logger.debug("LDBL_EPSILON: {}", jfloat.LDBL_EPSILON);
    }

    // ----------------------------------------------------------------- FLT_DIG
    @Test(enabled = true)
    public static void FLT_DIG() {
        logger.debug("FLT_DIG: {}", jfloat.FLT_DIG);
        assertTrue(jfloat.FLT_DIG > 0);
    }

    // ----------------------------------------------------------------- DBL_DIG
    @Test(enabled = true)
    public static void DBL_DIG() {
        logger.debug("DBL_DIG: {}", jfloat.DBL_DIG);
        assertTrue(jfloat.DBL_DIG > 0);
    }

    // ---------------------------------------------------------------- LDBL_DIG
    @Test(enabled = true)
    public static void LDBL_DIG() {
        logger.debug("LDBL_DIG: {}", jfloat.LDBL_DIG);
        assertTrue(jfloat.LDBL_DIG > 0);
    }

    // ------------------------------------------------------------ FLT_MANT_DIG
    @Test(enabled = true)
    public static void FLT_MANT_DIG() {
        logger.debug("FLT_MANT_DIG: {}", jfloat.FLT_MANT_DIG);
        assertTrue(jfloat.FLT_MANT_DIG > 0);
    }

    // ------------------------------------------------------------ DBL_MANT_DIG
    @Test(enabled = true)
    public static void DBL_MANT_DIG() {
        logger.debug("DBL_MANT_DIG: {}", jfloat.DBL_MANT_DIG);
        assertTrue(jfloat.DBL_MANT_DIG > 0);
    }

    // ----------------------------------------------------------- LDBL_MANT_DIG
    @Test(enabled = true)
    public static void LDBL_MANT_DIG() {
        logger.debug("LDBL_MANT_DIG: {}", jfloat.LDBL_MANT_DIG);
        assertTrue(jfloat.LDBL_MANT_DIG > 0);
    }

    // ------------------------------------------------------------ FLT_MIN_EXP
    @Test(enabled = true)
    public static void FLT_MIN_EXP() {
        logger.debug("FLT_MIN_EXP: {}", jfloat.FLT_MIN_EXP);
        assertTrue(jfloat.FLT_MIN_EXP < 0);
    }

    // ------------------------------------------------------------ DBL_MIN_EXP
    @Test(enabled = true)
    public static void DBL_MIN_EXP() {
        logger.debug("DBL_MIN_EXP: {}", jfloat.DBL_MIN_EXP);
        assertTrue(jfloat.DBL_MIN_EXP < 0);
    }

    // ----------------------------------------------------------- LDBL_MIN_EXP
    @Test(enabled = true)
    public static void LDBL_MIN_EXP() {
        logger.debug("LDBL_MIN_EXP: {}", jfloat.LDBL_MIN_EXP);
        assertTrue(jfloat.LDBL_MIN_EXP < 0);
    }

    // ---------------------------------------------------------- FLT_MIN_10_EXP
    @Test(enabled = true)
    public static void FLT_MIN_10_EXP() {
        logger.debug("FLT_MIN_10_EXP: {}", jfloat.FLT_MIN_10_EXP);
        assertTrue(jfloat.FLT_MIN_10_EXP < 0);
    }

    // ---------------------------------------------------------- DBL_MIN_10_EXP
    @Test(enabled = true)
    public static void DBL_MIN_10_EXP() {
        logger.debug("DBL_MIN_10_EXP: {}", jfloat.DBL_MIN_10_EXP);
        assertTrue(jfloat.DBL_MIN_10_EXP < 0);
    }

    // --------------------------------------------------------- LDBL_MIN_10_EXP
    @Test(enabled = true)
    public static void LDBL_MIN_10_EXP() {
        logger.debug("LDBL_MIN_10_EXP: {}", jfloat.LDBL_MIN_10_EXP);
        assertTrue(jfloat.LDBL_MIN_10_EXP < 0);
    }

    // ------------------------------------------------------------ FLT_MAX_EXP
    @Test(enabled = true)
    public static void FLT_MAX_EXP() {
        logger.debug("FLT_MAX_EXP: {}", jfloat.FLT_MAX_EXP);
        assertTrue(jfloat.FLT_MAX_EXP > 0);
    }

    // ------------------------------------------------------------ DBL_MAX_EXP
    @Test(enabled = true)
    public static void DBL_MAX_EXP() {
        logger.debug("DBL_MAX_EXP: {}", jfloat.DBL_MAX_EXP);
        assertTrue(jfloat.DBL_MAX_EXP > 0);
    }

    // ----------------------------------------------------------- LDBL_MAX_EXP
    @Test(enabled = true)
    public static void LDBL_MAX_EXP() {
        logger.debug("LDBL_MAX_EXP: {}", jfloat.LDBL_MAX_EXP);
        assertTrue(jfloat.LDBL_MAX_EXP > 0);
    }

    // ---------------------------------------------------------- FLT_MAX_10_EXP
    @Test(enabled = true)
    public static void FLT_MAX_10_EXP() {
        logger.debug("FLT_MAX_10_EXP: {}", jfloat.FLT_MAX_10_EXP);
        assertTrue(jfloat.FLT_MAX_10_EXP > 0);
    }

    // ---------------------------------------------------------- DBL_MAX_10_EXP
    @Test(enabled = true)
    public static void DBL_MAX_10_EXP() {
        logger.debug("DBL_MAX_10_EXP: {}", jfloat.DBL_MAX_10_EXP);
        assertTrue(jfloat.DBL_MAX_10_EXP > 0);
    }

    // --------------------------------------------------------- LDBL_MAX_10_EXP
    @Test(enabled = true)
    public static void LDBL_MAX_10_EXP() {
        logger.debug("LDBL_MAX_10_EXP: {}", jfloat.LDBL_MAX_10_EXP);
        assertTrue(jfloat.LDBL_MAX_10_EXP > 0);
    }

    // -------------------------------------------------------------- FLT_ROUNDS
    @Test(enabled = true)
    public static void FLT_ROUNDS() {
        logger.debug("FLT_ROUNDS: {}", jfloat.FLT_ROUNDS);
        //assertTrue(JniFloat.LDBL_MAX_10_EXP > 0);
    }

    // --------------------------------------------------- FLT_EVAL_METHOD (C99)
    @Test(enabled = true)
    public static void FLT_EVAL_METHOD() {
        logger.debug("FLT_EVAL_METHOD: {}", jfloat.FLT_EVAL_METHOD);
        //assertTrue(JniFloat.LDBL_MAX_10_EXP > 0);
    }

    // --------------------------------------------------- FLT_HAS_SUBNORM (C11)
    @Test(enabled = true)
    public static void FLT_HAS_SUBNORM() {
        logger.debug("FLT_HAS_SUBNORM: {}", jfloat.FLT_HAS_SUBNORM);
    }

    // --------------------------------------------------- DBL_HAS_SUBNORM (C11)
    @Test(enabled = true)
    public static void DBL_HAS_SUBNORM() {
        logger.debug("DBL_HAS_SUBNORM: {}", jfloat.DBL_HAS_SUBNORM);
    }

    // -------------------------------------------------- LDBL_HAS_SUBNORM (C11)
    @Test(enabled = true)
    public static void LDBL_HAS_SUBNORM() {
        logger.debug("LDBL_HAS_SUBNORM: {}", jfloat.LDBL_HAS_SUBNORM);
    }
}

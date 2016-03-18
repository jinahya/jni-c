/*
 * Copyright 2015 Jin Kwon &lt;onacit at gmail.com&gt;.
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
public class jlimitsTest extends JniCTest {

    private static final Logger logger = getLogger(lookup().lookupClass());

    @Test(enabled = true)
    public static void CHAR_BIT() {

        //logger.debug("CHAR_BIT: {}", JniLimits.CHAR_BIT);
        assertTrue(jlimits.CHAR_BIT > 0);
    }

    @Test(enabled = true)
    public static void MB_LEN_MAX() {

        //logger.debug("MB_LEN_MAX: {}", JniLimits.MB_LEN_MAX);
        assertTrue(jlimits.MB_LEN_MAX > 0);
    }

    @Test
    public static void CHAR_MIN() {

        //logger.debug("CHAR_MIN: {}", JniLimits.CHAR_MIN);
        assertTrue(jlimits.CHAR_MIN < 0);
    }

    @Test
    public static void CHAR_MAX() {

        //logger.debug("CHAR_MAX: {}", JniLimits.CHAR_MAX);
        assertTrue(jlimits.CHAR_MAX > 0);
    }

    @Test
    public static void SCHAR_MIN() {

        //logger.debug("SCHAR_MIN: {}", JniLimits.SCHAR_MIN);
        assertTrue(jlimits.SCHAR_MIN < 0);
    }

    @Test
    public static void SCHAR_MAX() {

        //logger.debug("SCHAR_MAX: {}", JniLimits.SCHAR_MAX);
        assertTrue(jlimits.SCHAR_MAX > 0);
    }

    @Test
    public static void UCHAR_MAX() {

        //logger.debug("UCHAR_MAX: {}", JniLimits.UCHAR_MAX);
        assertTrue(jlimits.UCHAR_MAX > 0);
    }

    @Test
    public static void SHRT_MIN() {

        //logger.debug("SHRT_MIN: {}", JniLimits.SHRT_MIN);
        assertTrue(jlimits.SHRT_MIN < 0);
    }

    @Test
    public static void SHRT_MAX() {

        //logger.debug("SHRT_MAX: {}", JniLimits.SHRT_MAX);
        assertTrue(jlimits.SHRT_MAX > 0);
    }

    @Test
    public static void USHRT_MAX() {

        //logger.debug("USHRT_MAX: {}", JniLimits.USHRT_MAX);
        assertTrue(jlimits.USHRT_MAX > 0);
    }

    @Test
    public static void INT_MIN() {

        //logger.debug("INT_MIN: {}", JniLimits.INT_MIN);
        assertTrue(jlimits.INT_MIN < 0);
    }

    @Test
    public static void INT_MAX() {

        //logger.debug("INT_MAX: {}", JniLimits.INT_MAX);
        assertTrue(jlimits.INT_MAX > 0);
    }

    @Test
    public static void UINT_MAX() {

        //logger.debug("UINT_MAX: {}", JniLimits.UINT_MAX);
        assertTrue(jlimits.UINT_MAX > 0L);
    }

    @Test
    public static void LONG_MIN() {

        //logger.debug("LONG_MIN: {}", JniLimits.LONG_MIN);
        assertTrue(jlimits.LONG_MIN < 0L);
    }

    @Test
    public static void LONG_MAX() {

        //logger.debug("LONG_MAX: {}", JniLimits.LONG_MAX);
        assertTrue(jlimits.LONG_MAX > 0L);
    }

    @Test
    public static void ULONG_MAX() {

        //logger.debug("ULONG_MAX: {}", JniLimits.ULONG_MAX);
        assertTrue(jlimits.ULONG_MAX == null
                   || jlimits.ULONG_MAX.signum() == 1);
    }

    @Test
    public static void LLONG_MIN() {

        //logger.debug("LLONG_MIN: {}", JniLimits.LLONG_MIN);
        assertTrue(jlimits.LLONG_MIN == null
                   || jlimits.LLONG_MIN.signum() == -1);
    }

    @Test
    public static void LLONG_MAX() {

        //logger.debug("LLONG_MAX: {}", JniLimits.LLONG_MAX);
        assertTrue(jlimits.LLONG_MAX == null
                   || jlimits.LLONG_MAX.signum() == 1);
    }

    @Test
    public static void ULLONG_MAX() {

        //logger.debug("ULLONG_MAX: {}", JniLimits.ULLONG_MAX);
        assertTrue(jlimits.ULLONG_MAX == null
                   || jlimits.ULLONG_MAX.signum() == 1);
    }

}

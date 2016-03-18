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
import java.util.Optional;
import org.slf4j.Logger;
import org.testng.annotations.Test;
import static org.slf4j.LoggerFactory.getLogger;
import static org.testng.Assert.assertEquals;
import static org.testng.Assert.assertTrue;

/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class jstdintTest extends JniCTest {

    private static final Logger logger = getLogger(lookup().lookupClass());

    // ------------------------------------------------------- PTRDIFF_MIN (C99)
    @Test(enabled = true)
    public static void PTRDIFF_MIN() {

        logger.debug("PTRDIFF_MIN: {}", jstdint.PTRDIFF_MIN);

        assertTrue(jstdint.PTRDIFF_MIN == null || jstdint.PTRDIFF_MIN < 0L);
    }

    // ------------------------------------------------------------- PTRDIFF_MAX
    @Test(enabled = true)
    public static void PTRDIFF_MAX() {

        logger.debug("PTRDIFF_MAX: {}", jstdint.PTRDIFF_MAX);

        assertTrue(jstdint.PTRDIFF_MAX == null || jstdint.PTRDIFF_MAX > 0L);
    }

    // ---------------------------------------------------------------- SIZE_MAX
    @Test
    public static void SIZE_MAX() {

        logger.debug("SIZE_MAX: {}", jstdint.SIZE_MAX);
        assertTrue(jstdint.SIZE_MAX == null
                   || jstdint.SIZE_MAX.signum() == 1);
    }

    @Test
    public static void SIG_ATOMIC_MIN() {
        logger.debug("SIG_ATOMIC_MIN: {}", jstdint.SIG_ATOMIC_MIN);
        assertTrue(jstdint.SIG_ATOMIC_MIN == null || jstdint.SIG_ATOMIC_MIN < 0);
    }

    @Test
    public static void SIG_ATOMIC_MAX() {
        logger.debug("SIG_ATOMIC_MAX: {}", jstdint.SIG_ATOMIC_MAX);
        assertTrue(jstdint.SIG_ATOMIC_MAX == null || jstdint.SIG_ATOMIC_MAX > 0);
    }

    @Test
    public static void WCHAR_MIN() {
        logger.debug("WCHAR_MIN: {}", jstdint.WCHAR_MIN);
    }

    @Test
    public static void WCHAR_MAX() {
        logger.debug("WCHAR_MAX: {}", jstdint.WCHAR_MAX);
    }

    @Test
    public static void WINT_MIN() {
        logger.debug("WINT_MIN: {}", jstdint.WINT_MIN);
    }

    @Test
    public static void WINT_MAX() {
        logger.debug("WINT_MAX: {}", jstdint.WINT_MAX);
    }

    // --------------------------------------------------------------- UINT8_MAX
    @Test
    public static void UINT8_MAX() {

        logger.debug("UINT8_MAX: {}", jstdint.UINT8_MAX);
        Optional
                .ofNullable(jstdint.UINT8_MAX)
                .ifPresent(v -> assertEquals(v.shortValue(), 255));
        assertTrue(jstdint.UINT8_MAX == null
                   || jstdint.UINT8_MAX.intValue() == 255);
    }

}

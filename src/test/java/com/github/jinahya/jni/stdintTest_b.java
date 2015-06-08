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


package com.github.jinahya.jni;


import com.github.jinahya.jnic.JniTest;
import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import static org.testng.Assert.assertTrue;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class stdintTest_b extends JniTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    // ------------------------------------------------------- PTRDIFF_MIN (C99)
    @Test(enabled = true)
    public static void PTRDIFF_MIN() {

        logger.debug("PTRDIFF_MIN: {}", stdint_b.PTRDIFF_MIN);

        assertTrue(stdint_b.PTRDIFF_MIN == null || stdint_b.PTRDIFF_MIN < 0L);
    }


    // ------------------------------------------------------------- PTRDIFF_MAX
    @Test(enabled = true)
    public static void PTRDIFF_MAX() {

        logger.debug("PTRDIFF_MAX: {}", stdint_b.PTRDIFF_MAX);

        assertTrue(stdint_b.PTRDIFF_MAX == null || stdint_b.PTRDIFF_MAX > 0L);
    }


    // ---------------------------------------------------------------- SIZE_MAX
    @Test
    public static void SIZE_MAX() {

        logger.debug("SIZE_MAX: {}", stdint_b.SIZE_MAX);
        assertTrue(stdint_b.SIZE_MAX == null
                   || stdint_b.SIZE_MAX.signum() == 1);
    }


    @Test
    public static void SIG_ATOMIC_MIN() {
        logger.debug("SIG_ATOMIC_MIN: {}", stdint_b.SIG_ATOMIC_MIN);
        assertTrue(stdint_b.SIG_ATOMIC_MIN == null || stdint_b.SIG_ATOMIC_MIN < 0);
    }


    @Test
    public static void SIG_ATOMIC_MAX() {
        logger.debug("SIG_ATOMIC_MAX: {}", stdint_b.SIG_ATOMIC_MAX);
        assertTrue(stdint_b.SIG_ATOMIC_MAX == null || stdint_b.SIG_ATOMIC_MAX > 0);
    }


    @Test
    public static void WCHAR_MIN() {
        logger.debug("WCHAR_MIN: {}", stdint_b.WCHAR_MIN);
    }


    @Test
    public static void WCHAR_MAX() {
        logger.debug("WCHAR_MAX: {}", stdint_b.WCHAR_MAX);
    }


    @Test
    public static void WINT_MIN() {
        logger.debug("WINT_MIN: {}", stdint_b.WINT_MIN);
    }


    @Test
    public static void WINT_MAX() {
        logger.debug("WINT_MAX: {}", stdint_b.WINT_MAX);
    }


}


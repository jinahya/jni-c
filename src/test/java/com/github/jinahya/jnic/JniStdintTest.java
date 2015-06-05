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


package com.github.jinahya.jnic;


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
public class JniStdintTest extends JniTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    @Test(enabled = true)
    public static void PTRDIFF_MIN() {

        logger.debug("PTRDIFF_MIN: {}", JniStdint.PTRDIFF_MIN);

        assertTrue(JniStdint.PTRDIFF_MIN < 0L);
    }


    @Test(enabled = true)
    public static void PTRDIFF_MAX() {

        logger.debug("PTRDIFF_MAX: {}", JniStdint.PTRDIFF_MAX);

        assertTrue(JniStdint.PTRDIFF_MAX > 0L);
    }


    // ---------------------------------------------------------------- SIZE_MAX
    @Test
    public static void SIZE_MAX() {

        logger.debug("SIZE_MAX: {}", JniStdint.SIZE_MAX);
        assertTrue(JniStdint.SIZE_MAX == null
                   || JniStdint.SIZE_MAX.signum() == 1);
    }


    @Test
    public static void SIG_ATOMIC_MIN() {
        logger.debug("SIG_ATOMIC_MIN: {}", JniStdint.SIG_ATOMIC_MIN);
    }


    @Test
    public static void SIG_ATOMIC_MAX() {
        logger.debug("SIG_ATOMIC_MAX: {}", JniStdint.SIG_ATOMIC_MAX);
    }


    @Test
    public static void WCHAR_MIN() {
        logger.debug("WCHAR_MIN: {}", JniStdint.WCHAR_MIN);
    }


    @Test
    public static void WCHAR_MAX() {
        logger.debug("WCHAR_MAX: {}", JniStdint.WCHAR_MAX);
    }


    @Test
    public static void WINT_MIN() {
        logger.debug("WINT_MIN: {}", JniStdint.WINT_MIN);
    }


    @Test
    public static void WINT_MAX() {
        logger.debug("WINT_MAX: {}", JniStdint.WINT_MAX);
    }


}


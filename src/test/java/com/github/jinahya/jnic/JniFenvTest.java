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


import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniFenvTest extends JniCTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    // ----------------------------------------------------- FE_ALL_EXCEPT (C99)
    @Test(enabled = true)
    public static void FE_ALL_EXCEPT() {

        logger.debug("EF_ALL_EXCEPT: {}", JniFenv.FE_ALL_EXCEPT);
    }


    // ------------------------------------------------------ FE_DIVBYZERO (C99)
    @Test(enabled = true)
    public static void DIVBYZERO() {

        logger.debug("FE_DIVBYZERO: {}", JniFenv.FE_DIVBYZERO);
    }


    // -------------------------------------------------------- FE_INEXACT (C99)
    @Test(enabled = true)
    public static void INEXACT() {

        logger.debug("FE_INEXACT: {}", JniFenv.FE_INEXACT);
    }


    // -------------------------------------------------------- FE_INVALID (C99)
    @Test(enabled = true)
    public static void INVALID() {

        logger.debug("FE_INVALID: {}", JniFenv.FE_INVALID);
    }


    // ------------------------------------------------------- FE_OVERFLOW (C99)
    @Test(enabled = true)
    public static void OVERFLOW() {

        logger.debug("FE_OVERFLOW: {}", JniFenv.FE_OVERFLOW);
    }


    // ------------------------------------------------------ FE_UNDERFLOW (C99)
    @Test(enabled = true)
    public static void UNDERFLOW() {

        logger.debug("FE_UNDERFLOW: {}", JniFenv.FE_UNDERFLOW);
    }


    // ------------------------------------------------------- FE_DOWNWARD (C99)
    @Test(enabled = true)
    public static void DOWNWARD() {

        logger.debug("FE_DOWNWARD: {}", JniFenv.FE_DOWNWARD);
    }


    // ------------------------------------------------------ FE_TONEAREST (C99)
    @Test(enabled = true)
    public static void TONEAREST() {

        logger.debug("FE_TONEAREST: {}", JniFenv.FE_TONEAREST);
    }


    // ----------------------------------------------------- FE_TOWARDZERO (C99)
    @Test(enabled = true)
    public static void TOWARDZERO() {

        logger.debug("FE_TOWARDZERO: {}", JniFenv.FE_TOWARDZERO);
    }


    // --------------------------------------------------------- FE_UPWARD (C99)
    @Test(enabled = true)
    public static void UPWARD() {

        logger.debug("FE_UPWARD: {}", JniFenv.FE_UPWARD);
    }


    // ----------------------------------------------------------- sizeof_fenv_t
    @Test(enabled = true)
    public static void sizeof_fenv_t() {

        logger.debug("sizeof_fenv_t: {}", JniFenv.size_of_fenv_t);
    }


}


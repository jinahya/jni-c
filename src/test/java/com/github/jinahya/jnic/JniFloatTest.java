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
import static org.testng.Assert.assertTrue;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniFloatTest extends JniTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    @Test(enabled = true)
    public static void FLT_RADIX() {

        logger.debug("FLT_RADIX: {}", JniFloat.FLT_RADIX);

        assertTrue(JniFloat.FLT_RADIX > 0);
    }


    @Test(enabled = true)
    public static void DECIMAL_DIG() {

        logger.debug("DECIAML_DIG: {}", JniFloat.DECIMAL_DIG);

        assertTrue(JniFloat.DECIMAL_DIG > 0);
    }


    @Test(enabled = true)
    public static void FLT_MIN() {

        logger.debug("FLT_MIN: {} (Float.MIN_NORMAL: {})", JniFloat.FLT_MIN, Float.MIN_NORMAL);

        assertTrue(JniFloat.FLT_MIN > .0f);
    }


    @Test(enabled = true)
    public static void DBL_MIN() {

        logger.debug("DBL_MIN: {} (Double.MIN_NORMAL: {})", JniFloat.DBL_MIN, Double.MIN_NORMAL);

        assertTrue(JniFloat.DBL_MIN > .0d);
    }


    @Test(enabled = true)
    public static void LDBL_MIN() {

        logger.debug("LDBL_MIN: {}", JniFloat.LDBL_MIN);
    }


    @Test(enabled = true)
    public static void FLT_MAX() {

        //logger.debug("FLT_MAX: {} ()", JniFloat.FLT_MAX, Float.MAX_VALUE);
        assertTrue(JniFloat.FLT_MAX > .0f);
    }


    @Test(enabled = true)
    public static void DBL_MAX() {

        //logger.debug("DBL_MAX: {} ({})", JniFloat.DBL_MAX, Double.MAX_VALUE);
        assertTrue(JniFloat.DBL_MAX > .0d);
    }


    @Test(enabled = true)
    public static void LDBL_MAX() {

        logger.debug("LDBL_MAX: {}", JniFloat.LDBL_MAX);
    }


}


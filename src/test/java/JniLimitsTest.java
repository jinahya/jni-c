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


import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import static org.testng.Assert.assertTrue;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniLimitsTest {


    static {
        System.loadLibrary(JnicTests.LIB_NAME);
    }


    private static final Logger logger = getLogger(lookup().lookupClass());


    @Test(enabled = true)
    public static void CHAR_BIT() {

        logger.debug("CHAR_BIT: {}", JniLimits.CHAR_BIT);

        assertTrue(JniLimits.CHAR_BIT > 0);
    }


    @Test(enabled = true)
    public static void MB_LEN_MAX() {

        logger.debug("MB_LEN_MAX: {}", JniLimits.MB_LEN_MAX);

        assertTrue(JniLimits.MB_LEN_MAX > 0);
    }


}


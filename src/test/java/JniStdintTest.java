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
public class JniStdintTest {


    static {
        System.loadLibrary(JnicTests.LIB_NAME);
    }


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


    @Test
    public static void SIZE_MAX() {
        logger.debug("SIZE_MAX: {}", JniStdint.SIZE_MAX);
    }


}


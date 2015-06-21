/*
 * Copyright 2015 Jin Kwon &lt;jinahya_at_gmail.com&gt;.
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


import com.github.jinahya.jnic.JniCTest;
import static java.lang.invoke.MethodHandles.lookup;
import java.nio.charset.StandardCharsets;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class StdlibTest extends JniCTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    @Test
    public static void EXIT_FAILURE() {

        logger.debug("EXIT_FAILURE: {}", Stdlib.EXIT_FAILURE);
    }


    @Test
    public static void EXIT_SUCCESS() {

        logger.debug("EXIT_SUCCESS: {}", Stdlib.EXIT_SUCCESS);
    }


    @Test
    public static void RAND_MAX() {

        logger.debug("RAND_MAX: {}", Stdlib.RAND_MAX);
    }


    @Test(enabled = false)
    public static void abort() {

        Stdlib.abort();

    }


    @Test(enabled = true)
    public static void getenv() {

        final byte[] name = new byte[]{'P', 'A', 'T', 'H', '\0'};
        final String value = Stdlib.getenv(name);
        logger.debug("PATH: {}", value);
    }


    @Test(enabled = true)
    public static void rand() {

        final int rand = Stdlib.rand();
        logger.debug("rand: {}", rand);
    }


    @Test(enabled = true)
    public static void srand() {

        Stdlib.srand(System.currentTimeMillis());
    }


    @Test(enabled = true)
    public static void system() {

        Stdlib.system(new byte[]{'l', 's', '\0'});
    }


}


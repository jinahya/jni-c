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


import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.Test;


/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class JniStdioTest {


    static {
        System.out.println(System.getProperty("java.library.path"));
        System.loadLibrary("jnic-0.1-SNAPSHOT");
    }


    @Test
    public static void BUFSIZ() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("BUFSIZ: {}", JniStdio.BUFSIZ);
    }


    @Test
    public static void EOF() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("EOF: {}", JniStdio.EOF);
    }


    @Test
    public static void FILENAME_MAX() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("FILENAME_MAX: {}", JniStdio.FILENAME_MAX);
    }


    @Test
    public static void FOPEN_MAX() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("FOPEN_MAX: {}", JniStdio.FOPEN_MAX);
    }


    @Test
    public static void puts() {

        final byte[] src = new byte[]{0x40, 0x41, 0x00};
        final int result = JniStdio.puts(src);
    }


    private transient final Logger logger = getLogger(lookup().lookupClass());


}


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
        System.loadLibrary("jnic-0.1-SNAPSHOT");
    }


    @Test(enabled = true)
    public static void _IOFBF() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("_IOFBF: {}", JniStdio._IOFBF);
    }


    @Test(enabled = true)
    public static void _IOLBF() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("_IOLBF: {}", JniStdio._IOLBF);
    }


    @Test(enabled = true)
    public static void _IONBF() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("_IONBF: {}", JniStdio._IONBF);
    }


    @Test(enabled = true)
    public static void BUFSIZ() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("BUFSIZ: {}", JniStdio.BUFSIZ);
    }


    @Test(enabled = true)
    public static void EOF() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("EOF: {}", JniStdio.EOF());
    }


    @Test(enabled = true)
    public static void FILENAME_MAX() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("FILENAME_MAX: {}", JniStdio.FILENAME_MAX);
    }


    @Test(enabled = true)
    public static void FOPEN_MAX() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("FOPEN_MAX: {}", JniStdio.FOPEN_MAX);
    }


    @Test(enabled = true)
    public static void SEEK_SET() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("SEEK_SET: {}", JniStdio.SEEK_SET);
    }


    @Test(enabled = true)
    public static void SEEK_CUR() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("SEEK_CUR: {}", JniStdio.SEEK_CUR);
    }


    @Test(enabled = true)
    public static void SEEK_END() {

        final Logger logger = getLogger(lookup().lookupClass());

        logger.debug("SEEK_END: {}", JniStdio.SEEK_END);
    }


    @Test(enabled = true)
    public static void puts() {

        final byte[] src = new byte[]{0x40, 0x41, 0x00};
        final int result = JniStdio.puts(src);
    }


    private transient final Logger logger = getLogger(lookup().lookupClass());


}


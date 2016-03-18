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

import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.Test;
import static org.slf4j.LoggerFactory.getLogger;

/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class jtime11Test extends JniCTest {

    private static final Logger logger = getLogger(lookup().lookupClass());

    @Test(enabled = true)
    public static void TIME_UTC() {

        logger.debug("TIME_UTC: {}", jtime11.TIME_UTC);
    }

    @Test(enabled = false)
    public static void sizeof_struct_timespec() {

        //final int sizeof_struct_timespec = time11.sizeof_struct_timespec();
        //logger.debug("sizeof_struct_timespec: {}", sizeof_struct_timespec);
    }

}

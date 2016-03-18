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

import com.github.jinahya.jni.c.jtime.tm;
import static java.lang.invoke.MethodHandles.lookup;
import java.util.Calendar;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.Test;
import static org.slf4j.LoggerFactory.getLogger;

/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class jtimeTest extends JniCTest {

    private static final Logger logger = getLogger(lookup().lookupClass());

    @Test
    public static void sizeof_time_t() {

        logger.debug("sizeof_time_t: {}", jtime.sizeof_time_t);
    }

    @Test
    public static void sizeof_clock_t() {

        logger.debug("sizeof_clock_t: {}", jtime.sizeof_clock_t);
    }

    @Test
    public static void sizeof_tm() {

        logger.debug("sizeof_tm: {}", jtime.sizeof_tm);
    }

    @Test(enabled = true)
    public static void time() {

        final long value = jtime.time();
        logger.debug("time: {}", value);
    }

    @Test(enabled = true)
    public static void clock() {

        final long value = jtime.clock();
        logger.debug("clock: {}", value);
    }

    @Test(enabled = true)
    public static void ctime() {

        final long t = jtime.time();
        final String c = jtime.ctime(t);
        logger.debug("ctime: {}", c);
    }

    @Test(enabled = true)
    public static void asctime() {

        final tm tma = tm.newInstance(Calendar.getInstance());
        final String result = jtime.asctime(tma);
        logger.debug("asctime: {}", result);
    }

}

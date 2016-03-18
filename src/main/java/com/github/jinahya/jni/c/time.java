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

import java.util.Calendar;
import java.util.function.LongConsumer;

/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class time {

    public static class tm {

        public static tm newInstance(final Calendar calendar) {
            final tm instance = new tm();
            instance.tm_sec = calendar.get(Calendar.SECOND);
            instance.tm_min = calendar.get(Calendar.MINUTE);
            instance.tm_hour = calendar.get(Calendar.HOUR_OF_DAY);
            instance.tm_mday = calendar.get(Calendar.DAY_OF_MONTH);
            instance.tm_mon = calendar.get(Calendar.MONTH);
            instance.tm_year = calendar.get(Calendar.YEAR) - 1900;
            instance.tm_wday = calendar.get(Calendar.DAY_OF_WEEK) - 1;
            instance.tm_yday = calendar.get(Calendar.DAY_OF_YEAR) - 1;
            instance.tm_isdst = calendar.get(Calendar.DST_OFFSET);
            return instance;
        }

        public int tm_sec;

        public int tm_min;

        public int tm_hour;

        public int tm_mday;

        public int tm_mon;

        public int tm_year;

        public int tm_wday;

        public int tm_yday;

        public int tm_isdst;

    }

    static native int sizeof_time_t();

    public static final int sizeof_time_t = sizeof_time_t();

    static native int sizeof_clock_t();

    public static final int sizeof_clock_t = sizeof_clock_t();

    static native int sizeof_tm();

    public static final int sizeof_tm = sizeof_tm();

    public static native long time();

    public static long time(final LongConsumer consumer) {

        final long time = time();

        if (consumer != null) {
            consumer.accept(time);
        }

        return time;
    }

    public static native long clock();

    public static native String ctime(long time);

    public static native String asctime(tm time_ptr);

}

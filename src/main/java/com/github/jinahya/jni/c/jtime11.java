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

/**
 *
 * @author Jin Kwon &lt;jinahya_at_gmail.com&gt;
 */
public class jtime11 {

    public static class struct_timespec {

        long tv_sec;

        long tv_nsec;

    }

    static native Integer TIME_UTC();

    public static final Integer TIME_UTC = TIME_UTC();
    //public static native int sizeof_struct_timespec();
    //public static native int timespec_get(struct_timespec timespec, int base);

}

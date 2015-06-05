

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


import java.math.BigInteger;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniStdint {


    /**
     * Reads the value of {@code PTRDIFF_MIN}.
     *
     * @return the value of {@code PTRDIFF_MIN}.
     */
    static native long PTRDIFF_MIN();


    public static final long PTRDIFF_MIN = PTRDIFF_MIN();


    /**
     * Reads the value of {@code PTRDIFF_MAX}.
     *
     * @return the value of {@code PTRDIFF_MAX}.
     */
    static native long PTRDIFF_MAX();


    public static final long PTRDIFF_MAX = PTRDIFF_MAX();


    static native byte[] SIZE_MAX_BYTES();


    /**
     * Reads the value of {@code SIZE_MAX} and returns the values as a
     * {@code BigInteger}.
     *
     * @return the value of {@code SIZE_MAX} or {@code null} if failed to read
     */
    static BigInteger SIZE_MAX() {
        final byte[] bytes = SIZE_MAX_BYTES();
        return bytes == null ? null : new BigInteger(1, bytes);
    }


    /**
     * The value of {@code SIZE_MAX}. This value may be {@code null} if failed
     * to read.
     */
    public static final BigInteger SIZE_MAX = SIZE_MAX();


    public static final int SIG_ATOMIC_MIN;


    static native int SIG_ATOMIC_MIN();


    static {
        SIG_ATOMIC_MIN = SIG_ATOMIC_MIN();
    }


    public static final int SIG_ATOMIC_MAX;


    static native int SIG_ATOMIC_MAX();


    static {
        SIG_ATOMIC_MAX = SIG_ATOMIC_MAX();
    }


    public static final int WCHAR_MIN;


    static native int WCHAR_MIN();


    static {
        WCHAR_MIN = WCHAR_MIN();
    }


    public static final int WCHAR_MAX;


    static native int WCHAR_MAX();


    static {
        WCHAR_MAX = WCHAR_MAX();
    }


    static native long WINT_MIN();


    public static final long WINT_MIN = WINT_MIN(); // wint_t


    static native long WINT_MAX();


    public static final long WINT_MAX = WINT_MAX(); // wint_t


}


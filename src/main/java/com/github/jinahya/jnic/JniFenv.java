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


package com.github.jinahya.jnic;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public class JniFenv {


    // ----------------------------------------------------- FE_ALL_EXCEPT (C99)
    static native Integer FE_ALL_EXCEPT();


    public static final Integer FE_ALL_EXCEPT = FE_ALL_EXCEPT();


    // ------------------------------------------------------ FE_DIVBYZERO (C99)
    static native Integer FE_DIVBYZERO();


    public static final Integer FE_DIVBYZERO = FE_DIVBYZERO();


    // -------------------------------------------------------- FE_INEXACT (C99)
    static native Integer FE_INEXACT();


    public static final Integer FE_INEXACT = FE_INEXACT();


    // -------------------------------------------------------- FE_INVALID (C99)
    static native Integer FE_INVALID();


    public static final Integer FE_INVALID = FE_INVALID();


    // ------------------------------------------------------- FE_OVERFLOW (C99)
    static native Integer FE_OVERFLOW();


    public static final Integer FE_OVERFLOW = FE_OVERFLOW();


    // ------------------------------------------------------ FE_UNDERFLOW (C99)
    static native Integer FE_UNDERFLOW();


    public static final Integer FE_UNDERFLOW = FE_UNDERFLOW();


    // ------------------------------------------------------- FE_DOWNWARD (C99)
    static native Integer FE_DOWNWARD();


    public static final Integer FE_DOWNWARD = FE_DOWNWARD();


    // ------------------------------------------------------ FE_TONEAREST (C99)
    static native Integer FE_TONEAREST();


    public static final Integer FE_TONEAREST = FE_TONEAREST();


    // ----------------------------------------------------- FE_TOWARDZERO (C99)
    static native Integer FE_TOWARDZERO();


    public static final Integer FE_TOWARDZERO = FE_TOWARDZERO();


    // --------------------------------------------------------- FE_UPWARD (C99)
    static native Integer FE_UPWARD();


    public static final Integer FE_UPWARD = FE_UPWARD();


    // ---------------------------------------------------------- size_of_fenv_t
    static native Integer sizeof_fenv_t();


    public static final Integer size_of_fenv_t = sizeof_fenv_t();


}


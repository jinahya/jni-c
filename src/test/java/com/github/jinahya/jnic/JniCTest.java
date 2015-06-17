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


import static java.lang.invoke.MethodHandles.lookup;
import org.slf4j.Logger;
import static org.slf4j.LoggerFactory.getLogger;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeSuite;
import org.testng.annotations.BeforeTest;


/**
 *
 * @author Jin Kwon &lt;onacit at gmail.com&gt;
 */
public abstract class JniCTest {


    private static final Logger logger = getLogger(lookup().lookupClass());


    static {
        System.loadLibrary(JniTests.LIB_NAME);
    }


    @BeforeSuite(enabled = false)
    public static void loadLibrary() {

        System.loadLibrary(JniTests.LIB_NAME);
    }


    @BeforeTest
    public void printNameBeforeTest() {

        logger.debug("================= BEFORE {}", getClass().getSimpleName());
    }


    @AfterTest
    public void printNameAfterTest() {

        logger.debug("=================  AFTER {}", getClass().getSimpleName());
    }


}


package com.pi4j.io.gpio.analog.impl;

/*-
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: LIBRARY  :: Java Library (API)
 * FILENAME      :  DefaultAnalogOutputConfig.java
 *
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
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
 * #L%
 */

import com.pi4j.config.impl.AddressConfigBase;
import com.pi4j.io.gpio.analog.AnalogOutputConfig;

import java.util.Properties;

public class DefaultAnalogOutputConfig
        extends AddressConfigBase<AnalogOutputConfig>
        implements AnalogOutputConfig {

    // private configuration properties
    protected Number shutdownValue = null;

    /**
     * PRIVATE CONSTRUCTOR
     */
    private DefaultAnalogOutputConfig(){
        super();
    }

    /**
     * PRIVATE CONSTRUCTOR
     * @param properties
     */
    protected DefaultAnalogOutputConfig(Properties properties){
        super(properties);

        // load address property
        if(properties.containsKey(SHUTDOWN_VALUE_KEY)){
            this.shutdownValue = Double.parseDouble(properties.getProperty(SHUTDOWN_VALUE_KEY));
        }
    }

    @Override
    public Number shutdownValue(){
        return this.shutdownValue;
    }

    @Override
    public DefaultAnalogOutputConfig shutdownValue(Number value){
        this.shutdownValue = value;
        return this;
    }

    @Override
    public DefaultAnalogOutputConfig load(Properties properties, String prefix){

        // ensure properties is not empty
        super.load(properties, prefix);

        // load any optional properties
        if(properties.containsKey(prefix + "." + SHUTDOWN_VALUE_KEY)){
            var shutdownValue = Double.parseDouble(properties.get(prefix + "." + SHUTDOWN_VALUE_KEY).toString());
            shutdownValue(shutdownValue);
        }

        return this;
    }
}
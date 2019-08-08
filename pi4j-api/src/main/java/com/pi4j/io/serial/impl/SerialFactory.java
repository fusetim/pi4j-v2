package com.pi4j.io.serial.impl;

/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: LIBRARY  :: Java Library (API)
 * FILENAME      :  SerialFactory.java
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

import com.pi4j.context.Context;
import com.pi4j.io.serial.Serial;
import com.pi4j.io.serial.SerialConfig;
import com.pi4j.io.serial.SerialProvider;
import com.pi4j.io.spi.Spi;
import com.pi4j.provider.exception.ProviderException;

/**
 * SPI factory - it returns instances of {@link Spi} interface.
 *
 * @author Robert Savage (<a
 *         href="http://www.savagehomeautomation.com">http://www.savagehomeautomation.com</a>)
 */
public class SerialFactory {

    // private constructor
    private SerialFactory() {
        // forbid object construction
    }

    public static Serial instance(Context context, String device) throws ProviderException {
        return instance(context, new SerialConfig(device));
    }

    public static Serial instance(Context context, String device, int baud) throws ProviderException {
        return instance(context, new SerialConfig(device, baud));
    }

    public static Serial instance(Context context, SerialConfig config) throws ProviderException {
        // get SPI instance using default provider
        SerialProvider provider = context.serial();
        return instance(provider, config);
    }

    public static Serial instance(Context context, String providerId, String device) throws ProviderException {
        return instance(context, providerId, new SerialConfig(device));
    }

    public static Serial instance(Context context, String providerId, String device, int baud) throws ProviderException {
        return instance(context, providerId, new SerialConfig(device, baud));
    }

    public static Serial instance(Context context, String providerId, SerialConfig config) throws ProviderException {
        // if provided, lookup the specified io; else use the default io
        if(providerId == null) {
            return instance(context, config);
        }
        else{
            SerialProvider provider = context.providers().serial().get(providerId);
            return instance(provider, config);
        }
    }

    public static Serial instance(SerialProvider provider, String device) throws ProviderException {
        return instance(provider, new SerialConfig(device));
    }

    public static Serial instance(SerialProvider provider, String device, int baud) throws ProviderException {
        return instance(provider, new SerialConfig(device, baud));
    }

    public static Serial instance(SerialProvider provider, SerialConfig config) throws ProviderException {
        try {
            // create a SPI instance using the io
            return provider.create(config);
        } catch(ProviderException pe){
            throw pe;
        } catch (Exception e) {
            //e.printStackTrace();
            throw new ProviderException(provider, e);
        }
    }
}

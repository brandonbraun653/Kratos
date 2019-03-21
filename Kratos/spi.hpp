/********************************************************************************
* File Name:
*   spi.hpp
*     
* Description:
*   Describes the Kratos interface to Chimera
* 
* 2019 | Brandon Braun | brandonbraun653@gmail.com
********************************************************************************/

#pragma once
#ifndef KRATOS_SPI_HPP
#define KRATOS_SPI_HPP

#include <Chimera/interface.hpp>

namespace Kratos
{
  class SPI : public Chimera::SPI::Interface
  {
  public:
    Chimera::Status_t init(const Chimera::SPI::Setup &setupStruct) final override;

    Chimera::Status_t getClockFrequency(uint32_t &freq) final override;

    Chimera::Status_t setClockFrequency(const uint32_t freq, const uint32_t tolerance) final override;

    Chimera::Status_t setPeripheralMode(const Chimera::SPI::SubPeripheral periph, const Chimera::SPI::SubPeripheralMode mode) final override;

    Chimera::Status_t readWriteBytes(const uint8_t *const txBuffer, uint8_t *const rxBuffer, const size_t length, const uint32_t timeoutMS) final override;

    Chimera::Status_t readBytes(uint8_t *const rxBuffer, const size_t length, const uint32_t timeoutMS) final override;

    Chimera::Status_t writeBytes(const uint8_t *const txBuffer, const size_t length, const uint32_t timeoutMS) final override;

    Chimera::Status_t setChipSelectControlMode(const Chimera::SPI::ChipSelectMode &mode) final override;

    Chimera::Status_t setChipSelect(const Chimera::GPIO::State &value) final override;

    Chimera::Status_t deInit() final override;

  };
  
  namespace SPIDefs
  {
    
  }
}


#endif /* !KRATOS_SPI_HPP */
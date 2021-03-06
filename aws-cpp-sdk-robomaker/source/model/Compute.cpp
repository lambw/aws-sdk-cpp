﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/robomaker/model/Compute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Compute::Compute() : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false)
{
}

Compute::Compute(JsonView jsonValue) : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Compute& Compute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simulationUnitLimit"))
  {
    m_simulationUnitLimit = jsonValue.GetInteger("simulationUnitLimit");

    m_simulationUnitLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Compute::Jsonize() const
{
  JsonValue payload;

  if(m_simulationUnitLimitHasBeenSet)
  {
   payload.WithInteger("simulationUnitLimit", m_simulationUnitLimit);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

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

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the request to stop a specific run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRunRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API StopRunRequest : public DeviceFarmRequest
  {
  public:
    StopRunRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline StopRunRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline StopRunRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Represents the Amazon Resource Name (ARN) of the Device Farm run you wish to
     * stop.</p>
     */
    inline StopRunRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

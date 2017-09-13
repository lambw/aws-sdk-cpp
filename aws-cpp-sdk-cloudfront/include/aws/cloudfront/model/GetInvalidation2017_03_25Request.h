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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to get an invalidation's information. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2017-03-25/GetInvalidationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API GetInvalidation2017_03_25Request : public CloudFrontRequest
  {
  public:
    GetInvalidation2017_03_25Request();
    Aws::String SerializePayload() const override;


    /**
     * <p>The distribution's ID.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * <p>The distribution's ID.</p>
     */
    inline GetInvalidation2017_03_25Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The distribution's ID.</p>
     */
    inline GetInvalidation2017_03_25Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The distribution's ID.</p>
     */
    inline GetInvalidation2017_03_25Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}


    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline GetInvalidation2017_03_25Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline GetInvalidation2017_03_25Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the invalidation request, for example,
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline GetInvalidation2017_03_25Request& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

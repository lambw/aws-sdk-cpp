﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a Docker image that is managed by AWS
   * CodeBuild.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/EnvironmentImage">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API EnvironmentImage
  {
  public:
    EnvironmentImage();
    EnvironmentImage(const Aws::Utils::Json::JsonValue& jsonValue);
    EnvironmentImage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Docker image's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The Docker image's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Docker image's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The Docker image's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The Docker image's name.</p>
     */
    inline EnvironmentImage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The Docker image's name.</p>
     */
    inline EnvironmentImage& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The Docker image's name.</p>
     */
    inline EnvironmentImage& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The Docker image's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The Docker image's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The Docker image's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The Docker image's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The Docker image's description.</p>
     */
    inline EnvironmentImage& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The Docker image's description.</p>
     */
    inline EnvironmentImage& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The Docker image's description.</p>
     */
    inline EnvironmentImage& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
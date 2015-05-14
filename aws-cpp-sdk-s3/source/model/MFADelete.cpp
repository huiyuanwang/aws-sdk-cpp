/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/MFADelete.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Enabled_HASH = HashingUtils::HashString("Enabled");
static const int Disabled_HASH = HashingUtils::HashString("Disabled");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace MFADeleteMapper
{
MFADelete GetMFADeleteForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Enabled_HASH)
  {
    return MFADelete::Enabled;
  }
  else if (hashCode == Disabled_HASH)
  {
    return MFADelete::Disabled;
  }

  return MFADelete::Enabled;
}

Aws::String GetNameForMFADelete(MFADelete value)
{
  switch(value)
  {
  case MFADelete::Enabled:
    return "Enabled";
  case MFADelete::Disabled:
    return "Disabled";
  default:
    return "Enabled";
  }
}

} // namespace MFADeleteMapper
} // namespace Model
} // namespace S3
} // namespace Aws
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

#include <aws/cognito-idp/model/ChangePasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ChangePasswordRequest::ChangePasswordRequest() : 
    m_previousPasswordHasBeenSet(false),
    m_proposedPasswordHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String ChangePasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_previousPasswordHasBeenSet)
  {
   payload.WithString("PreviousPassword", m_previousPassword);

  }

  if(m_proposedPasswordHasBeenSet)
  {
   payload.WithString("ProposedPassword", m_proposedPassword);

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ChangePasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ChangePassword"));
  return headers;

}





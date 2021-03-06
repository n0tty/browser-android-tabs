// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_SIGNIN_HEADER_MODIFICATION_DELEGATE_H_
#define CHROME_BROWSER_SIGNIN_HEADER_MODIFICATION_DELEGATE_H_

#include "base/macros.h"

class GURL;

namespace content {
class NavigationUIData;
}

namespace signin {

class ChromeRequestAdapter;
class ResponseAdapter;

class HeaderModificationDelegate {
 public:
  HeaderModificationDelegate() = default;
  virtual ~HeaderModificationDelegate() = default;

  virtual bool ShouldInterceptNavigation(
      content::NavigationUIData* navigation_ui_data) = 0;
  virtual void ProcessRequest(ChromeRequestAdapter* request_adapter,
                              const GURL& redirect_url) = 0;
  virtual void ProcessResponse(ResponseAdapter* response_adapter,
                               const GURL& redirect_url) = 0;

 private:
  DISALLOW_COPY_AND_ASSIGN(HeaderModificationDelegate);
};

}  // namespace signin

#endif  // CHROME_BROWSER_SIGNIN_HEADER_MODIFICATION_DELEGATE_H_

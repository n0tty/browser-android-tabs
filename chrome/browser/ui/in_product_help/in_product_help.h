// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_IN_PRODUCT_HELP_IN_PRODUCT_HELP_H_
#define CHROME_BROWSER_UI_IN_PRODUCT_HELP_IN_PRODUCT_HELP_H_

// Identifies a feature that has in-product help. This is used for dispatching
// in-product help promos from a |BrowserWindow| object.
enum class InProductHelpFeature {
  // For |ReopenTabInProductHelp|
  kReopenTab,
};

#endif  // CHROME_BROWSER_UI_IN_PRODUCT_HELP_IN_PRODUCT_HELP_H_

// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/css/properties/longhands/color_interpolation.h"

namespace blink {
namespace css_longhand {

const CSSValue* ColorInterpolation::CSSValueFromComputedStyleInternal(
    const ComputedStyle& style,
    const SVGComputedStyle& svg_style,
    const LayoutObject*,
    Node*,
    bool allow_visited_style) const {
  return CSSIdentifierValue::Create(svg_style.ColorInterpolation());
}

}  // namespace css_longhand
}  // namespace blink

/* Copyright 2023 The MediaPipe Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "mediapipe/tasks/c/components/containers/keypoint_converter.h"

#include <cstdlib>
#include <optional>
#include <string>

#include "mediapipe/framework/port/gtest.h"
#include "mediapipe/tasks/c/components/containers/keypoint.h"
#include "mediapipe/tasks/cc/components/containers/keypoint.h"

namespace mediapipe::tasks::c::components::containers {

TEST(RectConverterTest, ConvertsRectCustomValues) {
  mediapipe::tasks::components::containers::Rect cpp_rect = {0, 0, 0, 0};

  Rect c_rect;
  CppConvertToRect(cpp_rect, &c_rect);
}

}  // namespace mediapipe::tasks::c::components::containers

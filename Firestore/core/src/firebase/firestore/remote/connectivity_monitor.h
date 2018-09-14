/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIRESTORE_CORE_SRC_FIREBASE_FIRESTORE_REMOTE_CONNECTIVITY_MONITOR_H_
#define FIRESTORE_CORE_SRC_FIREBASE_FIRESTORE_REMOTE_CONNECTIVITY_MONITOR_H_

#include <functional>
#include <vector>

namespace firebase {
namespace firestore {
namespace remote {

class ConnectivityMonitor {
  public:
    enum class {
      Reachable,
      Unreachable
    };

  private:
    std::vector<std::function<void()>> on_;
};

}  // namespace remote
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_SRC_FIREBASE_FIRESTORE_REMOTE_CONNECTIVITY_MONITOR_H_

/*
 * Connection.hpp
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef SESSION_CONNECTIONS_CONNECTION_HPP
#define SESSION_CONNECTIONS_CONNECTION_HPP
 
#include <string>

#include <core/json/Json.hpp>

namespace rstudio {
namespace session {
namespace modules { 
namespace connections {
   
struct ConnectionId
{
   ConnectionId(const std::string& type, const std::string& host)
      : type(type), host(host)
   {
   }

   std::string type;
   std::string host;

   bool operator==(const ConnectionId& other) const
   {
      return other.type == type && other.host == host;
   }

   bool operator<(const ConnectionId& other) const
   {
      return (other.type + other.host) < (type + host);
   }
};

struct Connection
{
   Connection(const ConnectionId& id,
              const std::string& finder,
              const std::string& connectCode,
              const std::string& disconnectCode,
              double lastUsed)
      : id(id),
        finder(finder),
        connectCode(connectCode),
        disconnectCode(disconnectCode),
        lastUsed(lastUsed)
   {
   }

   ConnectionId id;
   std::string finder;
   std::string connectCode;
   std::string disconnectCode;
   double lastUsed;
};

core::json::Object connectionIdJson(const ConnectionId& id);
core::json::Object connectionJson(const Connection& connection);

bool hasConnectionId(const ConnectionId& id,
                     const core::json::Object& connectionJson);

                       
} // namespace connections
} // namespace modules
} // namesapce session
} // namespace rstudio

#endif // SESSION_CONNECTIONS_CONNECTION_HPP

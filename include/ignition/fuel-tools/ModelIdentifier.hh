/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef IGNITION_FUEL_TOOLS_MODELIDENTIFIER_HH_
#define IGNITION_FUEL_TOOLS_MODELIDENTIFIER_HH_

// #include <array>
// #include <cstdint>

#include <ctime>
#include <memory>
#include <ignition/fuel-tools/Helpers.hh>

namespace ignition
{
  namespace fuel_tools
  {
    /// \brief Forward Declaration
    class ModelIdentifierPrivate;

    /// \brief Defines how to identify a model
    class IGNITION_FUEL_TOOLS_VISIBLE ModelIdentifier
    {
      /// \brief Constructor
      public: ModelIdentifier();

      /// \brief Copy Constructor
      public: ModelIdentifier(const ModelIdentifier &_orig);

      /// \brief Assignment operator
      public: void operator=(const ModelIdentifier &_orig);

      /// \brief Destructor
      public: ~ModelIdentifier();

      /// \brief Returns just the last part of the model name
      /// \return Model name
      public: std::string Name() const;

      /// \brief Returns the first part of the model name
      /// \return Unique model name
      public: std::string UniqueName() const;

      /// \brief Returns the description of the model
      /// \return Model description
      public: std::string Description() const;

      /// \brief Returns the number of likes
      /// \return Number of likes
      public: unsigned int Likes() const;

      /// \brief Returns the file size of the model
      /// \return Model file size
      public: unsigned int FileSize() const;

      /// \brief Returns the number of model downloads
      /// \return Number of downloads
      public: unsigned int Downloads() const;

      /// \brief Returns the upload date of the model
      /// \return Model upload date
      public: std::time_t UploadDate() const;

      /// \brief Returns the modify date of the model
      /// \return Model modify date
      public: std::time_t ModifyDate() const;

      /// \brief Returns the category of the model
      /// \return Model category
      public: std::string Category() const;

      /// \brief Returns the uuid of the model
      /// \return Model uuid
      public: std::string Uuid() const;

      /// \brief set the second part of a model name
      /// \return true if successful
      public: bool Name(const std::string &_name);

      /// \brief Set the first part of a model name
      /// \return True if successful
      public: bool UniqueName(const std::string &_name);

      /// \brief Set the description of the model
      /// \return True if successful
      public: bool Description(const std::string &_desc);

      /// \brief Set the file size of the model
      /// \return True if successful
      public: bool FileSize(const unsigned int _filesize);

      /// \brief Set the number of model downloads
      /// \return True if successful
      public: bool Downloads(const unsigned int _downloads);

      /// \brief Set the number of likes
      /// \return True if successful
      public: bool Likes(const unsigned int _likes);

      /// \brief Set the upload date
      /// \return True if successful
      public: bool UploadDate(const std::time_t &_date);

      /// \brief Set the modify date
      /// \return True if successful
      public: bool ModifyDate(const std::time_t &_date);

      /// \brief Set the category of the model
      /// \return True if successful
      public: bool Category(const std::string &_cat);

      /// \brief Set the uuid of the model
      /// \return True if successful
      public: bool Uuid(const std::string &_uuid);

      // /// \brief returns a SHA 2 256 hash of the model
      // /// \remarks fulfills versioning requirement
      // public: std::array<std::uint8_t, 32> SHA_256() const;

      // /// \brief Sets the SHA 2 256 hash of the model
      // /// \param[in] _hash a 256 bit SHA 2 hash
      // /// \returns true if successful
      // public: bool SHA_256(const std::array<std::uint8_t, 32> &_hash);

      /// \brief PIMPL
      private: std::unique_ptr<ModelIdentifierPrivate> dataPtr;
    };
  }
}

#endif

/* Copyright 2017 - 2023 R. Thomas
 * Copyright 2017 - 2023 Quarkslab
 * Copyright 2017 - 2021 K. Nakagawa
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
 */
#ifndef LIEF_PE_HASH_H
#define LIEF_PE_HASH_H

#include "LIEF/visibility.h"
#include "LIEF/hash.hpp"

namespace LIEF {
namespace PE {

class Binary;
class DosHeader;
class RichHeader;
class RichEntry;
class Header;
class OptionalHeader;
class DataDirectory;
class Section;
class Relocation;
class RelocationEntry;
class Export;
class ExportEntry;
class TLS;
class Symbol;
class Debug;
class CodeView;
class CodeViewPDB;
class Import;
class ImportEntry;
class DelayImport;
class DelayImportEntry;
class ResourceNode;
class ResourceData;
class ResourceDirectory;
class ResourcesManager;
class ResourceVersion;
class ResourceStringFileInfo;
class ResourceFixedFileInfo;
class ResourceVarFileInfo;
class LangCodeItem;
class ResourceIcon;
class ResourceDialog;
class ResourceDialogItem;
class ResourceStringTable;
class ResourceAccelerator;
class Signature;
class x509;
class SignerInfo;
class ContentInfo;
class Attribute;
class ContentType;
class GenericType;
//class MsCounterSign;
class MsSpcNestedSignature;
class MsSpcStatementType;
class PKCS9AtSequenceNumber;
class PKCS9CounterSignature;
class PKCS9MessageDigest;
class PKCS9SigningTime;
class SpcSpOpusInfo;
class CodeIntegrity;
class LoadConfiguration;
class LoadConfigurationV0;
class LoadConfigurationV1;
class LoadConfigurationV2;
class LoadConfigurationV3;
class LoadConfigurationV4;
class LoadConfigurationV5;
class LoadConfigurationV6;
class LoadConfigurationV7;
class LoadConfigurationV8;
class LoadConfigurationV9;
class LoadConfigurationV10;
class LoadConfigurationV11;
class Pogo;
class PogoEntry;
class Repro;

//! Class which implements a visitor to compute
//! a **deterministic** hash for LIEF PE objects
class LIEF_API Hash : public LIEF::Hash {
  public:
  static LIEF::Hash::value_type hash(const Object& obj);

  public:
  using LIEF::Hash::Hash;
  using LIEF::Hash::hash;
  using LIEF::Hash::visit;
  using LIEF::Hash::process;

  public:
  void visit(const Binary& Binary)                        override;
  void visit(const DosHeader& dos_header)                 override;
  void visit(const RichHeader& rich_header)               override;
  void visit(const RichEntry& rich_entry)                 override;
  void visit(const Header& header)                        override;
  void visit(const OptionalHeader& optional_header)       override;
  void visit(const DataDirectory& data_directory)         override;
  void visit(const Section& section)                      override;
  void visit(const Relocation& relocation)                override;
  void visit(const RelocationEntry& relocation_entry)     override;
  void visit(const Export& export_)                       override;
  void visit(const ExportEntry& export_entry)             override;
  void visit(const TLS& tls)                              override;
  void visit(const Symbol& Symbol)                        override;
  void visit(const Debug& debug)                          override;
  void visit(const CodeView& cv)                          override;
  void visit(const CodeViewPDB& cvpdb)                    override;
  void visit(const Import& import)                        override;
  void visit(const ImportEntry& import_entry)             override;
  void visit(const DelayImport& import)                   override;
  void visit(const DelayImportEntry& import_entry)        override;
  void visit(const ResourceNode& resource_node)           override;
  void visit(const ResourceData& resource_data)           override;
  void visit(const ResourceDirectory& resource_directory) override;
  void visit(const ResourcesManager& resources_manager)   override;
  void visit(const ResourceVersion& resource_version)     override;
  void visit(const ResourceStringFileInfo& resource_sfi)  override;
  void visit(const ResourceFixedFileInfo& resource_ffi)   override;
  void visit(const ResourceVarFileInfo& resource_vfi)     override;
  void visit(const LangCodeItem& resource_lci)            override;
  void visit(const ResourceIcon& resource_icon)           override;
  void visit(const ResourceDialog& dialog)                override;
  void visit(const ResourceDialogItem& dialog_item)       override;
  void visit(const ResourceStringTable& string_table)     override;
  void visit(const ResourceAccelerator& acc)              override;
  void visit(const Signature& signature)                  override;
  void visit(const x509& x509)                            override;
  void visit(const SignerInfo& signerinfo)                override;
  void visit(const ContentInfo& contentinfo)              override;
  void visit(const Attribute& attr)                       override;
  void visit(const ContentType& attr)                     override;
  void visit(const GenericType& attr)                     override;
  //void visit(const MsCounterSign& attr)                 override;
  void visit(const MsSpcNestedSignature& attr)            override;
  void visit(const MsSpcStatementType& attr)              override;
  void visit(const PKCS9AtSequenceNumber& attr)           override;
  void visit(const PKCS9CounterSignature& attr)           override;
  void visit(const PKCS9MessageDigest& attr)              override;
  void visit(const PKCS9SigningTime& attr)                override;
  void visit(const SpcSpOpusInfo& attr)                   override;
  void visit(const CodeIntegrity& code_integrity)         override;
  void visit(const LoadConfiguration& config)             override;
  void visit(const LoadConfigurationV0& config)           override;
  void visit(const LoadConfigurationV1& config)           override;
  void visit(const LoadConfigurationV2& config)           override;
  void visit(const LoadConfigurationV3& config)           override;
  void visit(const LoadConfigurationV4& config)           override;
  void visit(const LoadConfigurationV5& config)           override;
  void visit(const LoadConfigurationV6& config)           override;
  void visit(const LoadConfigurationV7& config)           override;
  void visit(const LoadConfigurationV8& config)           override;
  void visit(const LoadConfigurationV9& config)           override;
  void visit(const LoadConfigurationV10& config)          override;
  void visit(const LoadConfigurationV11& config)          override;

  void visit(const Pogo& pogo)        override;
  void visit(const PogoEntry& entry)  override;
  void visit(const Repro& entry)      override;

  ~Hash() override;
};

}
}

#endif

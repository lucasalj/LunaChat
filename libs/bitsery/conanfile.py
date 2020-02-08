from conans import ConanFile


class Bitsery(ConanFile):
    name = "bitsery"
    version = "5.0.3"
    exports_sources = "include/*"
    no_copy_source = True
    license = "MIT"
    settings = ['compiler']

    def package(self):
        self.copy("*.h")

    def package_id(self):
        self.info.header_only()

    def package_info(self):
        self.settings.compiler.cppstd = '17'
        self.cpp_info.cppflags.append('-std=c++17')

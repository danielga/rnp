Pod::Spec.new do |s|
    s.name     = 'rnp'
    s.version  = '0.15.0'
    s.license  = 'BSD 3-Clause License'
    s.summary  = 'RNP: high performance C++ OpenPGP library, fully compliant to RFC 4880'
    s.homepage = 'https://github.com/rnpgp/rnp'
    s.authors  = 'Nominet UK', 'The NetBSD Foundation, Inc', 'Ribose Inc'
    s.source   = { :git => 'https://github.com/rnpgp/rnp.git', :tag => "v#{ s.version.to_s }" }

    s.swift_version = '5.0'
    s.ios.deployment_target = '10.0'

    s.source_files = 'include/repgp/*.h', 'include/rnp/*.h'
    s.header_mappings_dir = 'include'

    s.pod_target_xcconfig   = {
        "HEADER_SEARCH_PATHS" => "\"$(PODS_ROOT)/Headers/Private/rnp/common\" \"$(PODS_ROOT)/Headers/Private/rnp/include\" \"$(PODS_ROOT)/Headers/Private/rnp/lib\"",
        "USE_HEADERMAP" => "NO"
    }

    s.dependency 'botan', '~> 2.18.0'
    s.dependency 'json-c', '~> 0.15.0'

    s.subspec 'include' do |sp|
        sp.source_files = 'include/rnp.h', 'include/rekey/*.h'
        sp.private_header_files = 'include/rnp.h', 'include/rekey/*.h'
        sp.header_mappings_dir = '.'
    end

    s.subspec 'common' do |sp|
        sp.source_files = 'src/common/*.{h,cpp}'
        sp.private_header_files = 'src/common/*.h'
        sp.header_mappings_dir = 'src'
    end

    s.subspec 'lib' do |sp|
        sp.source_files = 'src/lib/*.{h,cpp}'
        sp.private_header_files = 'src/lib/*.h'
        sp.header_mappings_dir = 'src'

        sp.subspec 'crypto' do |ssp|
            ssp.source_files = 'src/lib/crypto/*.{h,cpp}'
            ssp.private_header_files = 'src/lib/crypto/*.h'
            ssp.header_mappings_dir = 'src'
        end
    end

    s.subspec 'librekey' do |sp|
        sp.source_files = 'src/librekey/*.{h,cpp}'
        sp.private_header_files = 'src/librekey/*.h'
        sp.header_mappings_dir = 'src'
    end

    s.subspec 'librepgp' do |sp|
        sp.source_files = 'src/librepgp/*.{h,cpp}'
        sp.private_header_files = 'src/librepgp/*.h'
        sp.header_mappings_dir = 'src'
    end
end

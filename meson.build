project('unstdalias',
        'c',
        version : '1.0.0',
        license : 'MIT',
        default_options : ['warning_level=3', 'c_std=gnu23'])

pkg_config = import('pkgconfig')

lib_args = ['-DBUILDING_MESON_LIBRARY']

headers = include_directories('include')

header_file = files('include/unstdalias.h')

man_file = files('man/unstdalias.3')

unstdalias_lib = static_library(
        'libunstdalias',
        include_directories : headers,
        sources : [],
        install : true
)

unstdalias_dep = declare_dependency(
        include_directories : headers,
        link_with : unstdalias_lib
)

install_man(man_file)

install_headers(header_file)

pkg_config.generate(
        filebase: 'unstdalias',
        version : '1.0.0',
        name: 'unstdalias',
        description: 'A single-header library providing unstandard type aliases',
)

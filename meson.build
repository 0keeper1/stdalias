project('stdalias',
        'c',
        version : '1.0.0',
        license : 'MIT',
        default_options : ['warning_level=3', 'c_std=gnu23'])

pkg_config = import('pkgconfig')

lib_args = ['-DBUILDING_MESON_LIBRARY']

headers = include_directories('include')

header_file = files('include/stdalias.h')

man_file = files('man/stdalias.3')

stdalias_lib = static_library(
        'libstdalias',
        include_directories : headers,
        sources : [],
        install : true
)

stdalias_dep = declare_dependency(
        include_directories : headers,
        link_with : stdalias_lib
)

install_man(man_file)

install_headers(header_file)

pkg_config.generate(
        filebase: 'stdalias',
        version : '1.0.0',
        name: 'stdalias',
        description: 'A single-header library providing standard type aliases',
)

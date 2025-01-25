# tree-sitter-caddy



## Functionality

- [x] Global options
    - [x] Option name
    - [x] Option value
- [ ] Server 
    - [x] Protocol, domain, port in any order 
    - [x] Multiple addresses
    - [ ] No need for `{}` when only one server
    - [ ] Environment variables in address ex. `{$DOMAIN:localhost}`
- [ ] Tokens and quotes
    - [x] directive "simple string"
    - [x] directive "\"simple string\""
    - [x] directive "\"simple string\""
    - [x] directive `"quoted string"`
    - [x] directive "miltiline
        string"
    - [ ] Heredocs
        ```
        example.com {
            respond <<HTML
                <html>
                  <head><title>Foo</title></head>
                  <body>Foo</body>
                </html>
                HTML 200
        }
        ```
- [ ] Matchers
- [ ] Placeholders
- [ ] Snippets
- [ ] Named Routes
- [x] Comments
- [x] Environment variables


# tree-sitter-caddy



## Functionality

- [x] Global options
    - [x] Option name
    - [x] Option value
    - [x] Block options
- [ ] Server 
    - [x] Protocol, domain, port in any order 
    - [x] Multiple addresses
    - [ ] No need for `{}` when only one server
    - [x] Environment variables in address ex. `{$DOMAIN:localhost}`
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
- [x] Matchers
    - [x] `/path`
    - [x] `*`
    - [x] `@post`
- [x] Placeholders
- [x] Snippets
    - [x] `import` directive
- [x] Named Routes
- [x] Comments
- [x] Environment variables
- [ ] Types support
    - [x] `string`
    - [x] `quoted strings`
    - [x] `numerical`
    - [x] `boolean`
    - [x] `time` (`1s`, `1m`, `1h`, `1d`)
    - [x] `size` (`1KB`, `1MiB`)
- [ ] Expressions
    - [x] After-placeholder expressions (`{method}.startsWith("P")`)
    - [ ] Expressions (`header({'Connection':'*Upgrade*','Upgrade':'websocket'}`) 
- [ ] Special cases
    - [ ] Placeholders can't be found in random string (`redir https://www.{host}{uri}`)
	

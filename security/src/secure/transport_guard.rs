pub struct TransportGuard {
    pub max_packet_size: usize,
}

impl TransportGuard {
    pub fn validate(&self, packet: &[u8]) -> bool {
        packet.len() <= self.max_packet_size
    }
}